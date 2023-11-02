
@interface CHResultWithContext : NSObject {
    int  _contentType;
    NSString * _leftContext;
    CHMutableTokenizedTextResult * _result;
}

@property (readonly) int contentType;
@property (nonatomic, readonly) NSString *leftContext;
@property (nonatomic, readonly) CHMutableTokenizedTextResult *result;

- (void).cxx_destruct;
- (int)contentType;
- (id)initWithResult:(id)arg1 leftContext:(id)arg2 contentType:(int)arg3;
- (id)leftContext;
- (id)result;

@end
