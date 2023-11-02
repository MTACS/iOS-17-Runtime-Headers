
@interface CryptoKitPrivate.TDMServerEvaluation : NSObject {
    void evaluatedElement;
    void proof;
}

@property (nonatomic, readonly) NSData *evaluatedElement;
@property (nonatomic, readonly) NSData *proof;

- (void).cxx_destruct;
- (id)evaluatedElement;
- (id)init;
- (id)proof;

@end
