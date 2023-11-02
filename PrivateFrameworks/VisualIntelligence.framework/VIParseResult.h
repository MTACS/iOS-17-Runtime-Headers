
@interface VIParseResult : NSObject <NSCopying> {
    VIVisualUnderstanding * _visualUnderstanding;
}

@property (nonatomic, readonly) VIVisualUnderstanding *visualUnderstanding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithVisualUnderstanding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)visualUnderstanding;

@end
