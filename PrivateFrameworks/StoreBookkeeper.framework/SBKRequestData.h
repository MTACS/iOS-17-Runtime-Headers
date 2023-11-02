
@interface SBKRequestData : NSObject {
    SBKTransaction * _transaction;
}

@property (nonatomic, retain) SBKTransaction *transaction;

+ (id)propertyListBodyWithTransaction:(id)arg1;

- (void).cxx_destruct;
- (id)initWithTransaction:(id)arg1;
- (id)serializableRequestBodyPropertyList;
- (void)setTransaction:(id)arg1;
- (id)transaction;

@end
