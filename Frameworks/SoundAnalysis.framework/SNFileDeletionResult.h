
@interface SNFileDeletionResult : NSObject <SNResult> {
    void error;
    void fileName;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *fileName;

- (void).cxx_destruct;
- (id)error;
- (id)fileName;
- (id)init;
- (id)initWithFileName:(id)arg1 error:(id)arg2;

@end
