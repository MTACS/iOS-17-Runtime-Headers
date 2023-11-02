
@interface _MLCANEModel : NSObject {
    _ANEInMemoryModel * _anefModel;
    NSDictionary * _options;
    NSDictionary * _plist;
    unsigned int  _qos;
}

@property (nonatomic, readonly, retain) _ANEInMemoryModel *anefModel;
@property (nonatomic, readonly, copy) NSDictionary *options;
@property (nonatomic, readonly, copy) NSDictionary *plist;
@property (nonatomic, readonly) unsigned int qos;

+ (id)objectWithModel:(id)arg1 options:(id)arg2 qos:(unsigned int)arg3 plist:(id)arg4;

- (void).cxx_destruct;
- (id)anefModel;
- (void)dealloc;
- (id)initWithModel:(id)arg1 options:(id)arg2 qos:(unsigned int)arg3 plist:(id)arg4;
- (id)options;
- (id)plist;
- (unsigned int)qos;

@end
