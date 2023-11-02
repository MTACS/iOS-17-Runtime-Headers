
@interface UpdateAndReportServices : NSObject {
    id /* block */  _block;
    bool  _report;
    bool  _update;
}

@property (copy) id /* block */ block;
@property (readonly) bool report;
@property (readonly) bool update;

- (id /* block */)block;
- (void)dealloc;
- (id)initWithServices:(bool)arg1 needToReport:(bool)arg2 service:(id /* block */)arg3;
- (bool)report;
- (void)setBlock:(id /* block */)arg1;
- (bool)update;

@end
