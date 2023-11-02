
@interface _PSCNAutocompleteFeedbackErasedHandle : NSObject <NSSecureCoding> {
    CNContact * _contact;
}

@property (nonatomic, readonly, copy) CNContact *contact;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contact;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1;

@end
