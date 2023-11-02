
@interface ISResourceMetaData : NSObject <ISResourceMetadata> {
    NSNumber * _dimension;
    NSString * _name;
    NSNumber * _scale;
    bool  _selectedVariant;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSNumber *dimension;
@property (readonly) unsigned long long hash;
@property (retain) NSString *name;
@property (retain) NSNumber *scale;
@property bool selectedVariant;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dimension;
- (id)name;
- (id)scale;
- (bool)selectedVariant;
- (void)setDimension:(id)arg1;
- (void)setName:(id)arg1;
- (void)setScale:(id)arg1;
- (void)setSelectedVariant:(bool)arg1;

@end
