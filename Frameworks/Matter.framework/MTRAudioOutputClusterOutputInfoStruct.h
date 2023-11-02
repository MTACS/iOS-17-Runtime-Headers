
@interface MTRAudioOutputClusterOutputInfoStruct : NSObject <NSCopying> {
    NSNumber * _index;
    NSString * _name;
    NSNumber * _outputType;
}

@property (nonatomic, copy) NSNumber *index;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *outputType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)index;
- (id)init;
- (id)name;
- (id)outputType;
- (void)setIndex:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOutputType:(id)arg1;

@end
