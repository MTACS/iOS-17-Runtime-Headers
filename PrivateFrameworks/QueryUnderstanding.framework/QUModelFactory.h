
@interface QUModelFactory : NSObject {
    NSCondition * _condition;
    NSError * _loadError;
    <QUUnderstandingModel> * _quModel;
    id /* block */  _releaseBlock;
    int  _state;
    NSObject<OS_os_transaction> * _transaction;
    NSSet * _unsupportedLocaleIdentifiers;
}

@property (nonatomic, retain) NSError *loadError;

+ (id)U2HeadBundle;
+ (id)log;
+ (void)setU2HeadBundle:(id)arg1;
+ (void)setUseSpotlightResources:(bool)arg1;
+ (id)sharedInstance;
+ (bool)useSpotlightResources;

- (void).cxx_destruct;
- (id)getModelForLocale:(id)arg1 withTimeoutMS:(unsigned int)arg2;
- (id)init;
- (id)loadError;
- (id)quModel;
- (void)releaseModel;
- (void)setLoadError:(id)arg1;

@end
