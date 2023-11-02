
@interface INCDisplayLayoutMonitorObserver : NSObject {
    id /* block */  _handler;
}

@property (nonatomic, copy) id /* block */ handler;

+ (void)initialize;

- (void).cxx_destruct;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;
- (void)updateDisplayLayout:(id)arg1;

@end
