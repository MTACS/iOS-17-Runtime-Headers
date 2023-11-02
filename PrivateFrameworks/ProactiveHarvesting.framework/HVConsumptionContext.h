
@interface HVConsumptionContext : NSObject {
    _PASLazyResult * _cachedParser;
    NSObject<BMIdentifiableContentEvent> * _content;
    NSString * _contentProtection;
    id /* block */  _scheduledTaskShouldContinueBlock;
}

@property (nonatomic, readonly) NSObject<BMIdentifiableContentEvent> *content;
@property (nonatomic, readonly) NSString *contentProtection;
@property (nonatomic, readonly) HVHtmlParser *htmlParser;

- (void).cxx_destruct;
- (id)_parseHtmlContentIfAvailable;
- (id)content;
- (id)contentProtection;
- (id)description;
- (id)htmlParser;
- (id)initWithContent:(id)arg1 contentProtection:(id)arg2 scheduledTaskShouldContinueBlock:(id /* block */)arg3;
- (bool)shouldContinue;

@end
