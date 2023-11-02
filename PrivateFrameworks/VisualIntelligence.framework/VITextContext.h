
@interface VITextContext : NSObject <NSCopying> {
    NSArray * _normalizedBoundingBoxes;
    NSString * _surroundingText;
}

@property (nonatomic, readonly, copy) NSArray *normalizedBoundingBoxes;
@property (nonatomic, readonly, copy) NSString *surroundingText;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithSurroundingText:(id)arg1 normalizedBoundingBoxes:(id)arg2;
- (id)normalizedBoundingBoxes;
- (id)surroundingText;

@end
