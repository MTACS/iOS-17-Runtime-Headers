
@interface SBWorkItem : NSObject {
    NSDate * _creationDate;
    id /* block */  _workBlock;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly, copy) id /* block */ work;

- (void).cxx_destruct;
- (id)creationDate;
- (id)initWithWork:(id /* block */)arg1;
- (id /* block */)work;

@end
