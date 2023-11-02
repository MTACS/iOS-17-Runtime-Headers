
@interface GEOColor : NSObject {
    int  _systemColor;
}

@property (nonatomic, readonly) int systemColor;

- (id)initWithColor:(id)arg1;
- (id)initWithSystemColor:(int)arg1;
- (int)systemColor;

@end
