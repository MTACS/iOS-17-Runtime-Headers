
@interface NUIGridDimension : NSObject <NUIGridDimension> {
    NSArray * _arrangedSubviews;
    struct { 
        unsigned int align : 8; 
        unsigned int isRow : 1; 
        unsigned int hidden : 1; 
        unsigned int wasDetached : 1; 
    }  _flags;
    NUIContainerGridView * _gridView;
    double  _length;
    double  _spacing;
}

@property (nonatomic) long long alignment;
@property (nonatomic, copy) NSArray *arrangedSubviews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic) double length;
@property (nonatomic) double spacingAfter;
@property (readonly) Class superclass;

- (long long)alignment;
- (id)arrangedSubviews;
- (void)dealloc;
- (bool)isHidden;
- (double)length;
- (void)setAlignment:(long long)arg1;
- (void)setHidden:(bool)arg1;
- (void)setLength:(double)arg1;
- (void)setSpacingAfter:(double)arg1;
- (double)spacingAfter;

@end
