
@interface WFEvernoteTag : NSObject <NSSecureCoding> {
    NSString * _guid;
    NSString * _name;
    NSString * _parentGuid;
    NSNumber * _updateSequenceNum;
}

@property (nonatomic, retain) NSString *guid;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *parentGuid;
@property (nonatomic, retain) NSNumber *updateSequenceNum;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)guid;
- (id)initWithCoder:(id)arg1;
- (id)initWithGUID:(id)arg1 name:(id)arg2 parentGuid:(id)arg3 updateSequenceNum:(id)arg4;
- (id)initWithTag:(id)arg1;
- (id)name;
- (id)parentGuid;
- (void)setGuid:(id)arg1;
- (void)setName:(id)arg1;
- (void)setParentGuid:(id)arg1;
- (void)setUpdateSequenceNum:(id)arg1;
- (id)updateSequenceNum;

@end
