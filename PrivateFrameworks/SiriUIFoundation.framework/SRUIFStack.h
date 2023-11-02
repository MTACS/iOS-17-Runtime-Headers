
@interface SRUIFStack : NSObject <NSCopying> {
    NSMutableArray * _elements;
}

@property (nonatomic, readonly, copy) NSArray *allObjects;
@property (getter=_elements, nonatomic, readonly) NSMutableArray *elements;
@property (nonatomic, readonly) id topObject;

- (void).cxx_destruct;
- (id)_elements;
- (id)allObjects;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithArray:(id)arg1;
- (id)initWithStack:(id)arg1;
- (id)topObject;

@end
