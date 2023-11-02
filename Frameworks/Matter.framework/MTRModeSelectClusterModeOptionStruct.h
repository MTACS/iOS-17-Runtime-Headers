
@interface MTRModeSelectClusterModeOptionStruct : NSObject <NSCopying> {
    NSString * _label;
    NSNumber * _mode;
    NSArray * _semanticTags;
}

@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSNumber *mode;
@property (nonatomic, copy) NSArray *semanticTags;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)label;
- (id)mode;
- (id)semanticTags;
- (void)setLabel:(id)arg1;
- (void)setMode:(id)arg1;
- (void)setSemanticTags:(id)arg1;

@end
