
@interface AMSBagUnderlyingData : NSObject {
    void aliasKeys;
    void bagDictionary;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  expirationDate;
    void fileKey;
    void version;
}

@property (nonatomic, readonly) NSSet *aliasKeys;
@property (nonatomic, readonly) NSDictionary *bagDictionary;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSString *fileKey;

- (void).cxx_destruct;
- (id)aliasKeys;
- (id)bagDictionary;
- (id)expirationDate;
- (id)fileKey;
- (id)init;
- (id)initWithFileKey:(id)arg1 aliasKeys:(id)arg2 bagDictionary:(id)arg3 expirationDate:(id)arg4;

@end
