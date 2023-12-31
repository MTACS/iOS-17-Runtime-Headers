
@interface OCXRelationship : NSObject {
    bool  mExternal;
    NSString * mIdString;
    NSString * mTarget;
    NSString * mType;
}

@property (nonatomic, readonly) NSString *idString;
@property (nonatomic, readonly) NSString *target;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)idString;
- (id)initWithId:(unsigned long long)arg1 type:(id)arg2 target:(id)arg3 external:(bool)arg4;
- (id)target;
- (id)type;
- (void)writeToStreamWriter:(id)arg1;

@end
