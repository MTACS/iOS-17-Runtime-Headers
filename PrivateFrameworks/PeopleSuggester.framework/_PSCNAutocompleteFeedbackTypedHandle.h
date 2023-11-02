
@interface _PSCNAutocompleteFeedbackTypedHandle : NSObject <NSSecureCoding> {
    CNContact * _contact;
    bool  _viaContactPicker;
}

@property (nonatomic, readonly, copy) CNContact *contact;
@property (nonatomic, readonly) bool viaContactPicker;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contact;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 viaContactPicker:(bool)arg2;
- (bool)viaContactPicker;

@end
