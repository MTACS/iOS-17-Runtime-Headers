
@interface HMMTagProcessorCreatorObserver : NSObject <HMMTagObserving> {
    id /* block */  _creationBlock;
}

@property (nonatomic, readonly) id /* block */ creationBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)addObserverForStartTags:(id)arg1 usingCreatorBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (id /* block */)creationBlock;
- (id)initWithCreationBlock:(id /* block */)arg1;
- (void)observeTaggedEvent:(id)arg1 addProcessorBlock:(id /* block */)arg2;

@end
