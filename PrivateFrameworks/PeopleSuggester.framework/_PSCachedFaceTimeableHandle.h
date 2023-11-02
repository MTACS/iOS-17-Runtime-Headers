
@interface _PSCachedFaceTimeableHandle : NSObject {
    NSDate * _expirationDate;
    NSString * _handle;
}

@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly, copy) NSString *handle;

- (void).cxx_destruct;
- (id)expirationDate;
- (id)handle;
- (id)initWithExpirationDate:(id)arg1 handle:(id)arg2;

@end
