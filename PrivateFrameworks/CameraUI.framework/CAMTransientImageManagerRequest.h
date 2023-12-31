
@interface CAMTransientImageManagerRequest : NSObject {
    bool  _isCanceled;
    bool  _isFinished;
    id /* block */  _resultHandler;
    NSString * _uuid;
}

@property (nonatomic) bool isCanceled;
@property (nonatomic) bool isFinished;
@property (nonatomic, copy) id /* block */ resultHandler;
@property (nonatomic, copy) NSString *uuid;

- (void).cxx_destruct;
- (bool)isCanceled;
- (bool)isFinished;
- (id /* block */)resultHandler;
- (void)setIsCanceled:(bool)arg1;
- (void)setIsFinished:(bool)arg1;
- (void)setResultHandler:(id /* block */)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
