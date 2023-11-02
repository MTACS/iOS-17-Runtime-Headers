
@interface PSITable : NSObject {
    <PSITableDelegate> * _delegate;
    bool  _finalizzeWasCalled;
}

@property (readonly) <PSITableDelegate> *delegate;

- (void).cxx_destruct;
- (void)clear;
- (void)dealloc;
- (id)delegate;
- (void)finalizze;
- (id)initWithDelegate:(id)arg1 searchable:(bool)arg2 writable:(bool)arg3;

@end
