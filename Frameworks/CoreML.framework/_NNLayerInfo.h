
@interface _NNLayerInfo : NSObject {
    bool  _bidirectional;
    NSString * _concatenatedInputNames;
    NSString * _type;
}

@property (nonatomic, readonly) bool bidirectional;
@property (nonatomic, readonly, copy) NSString *concatenatedInputNames;
@property (nonatomic, readonly, copy) NSString *type;

- (void).cxx_destruct;
- (bool)bidirectional;
- (id)concatenatedInputNames;
- (id)initWithType:(id)arg1 concatenatedInputNames:(id)arg2 bidirectional:(bool)arg3;
- (id)type;

@end
