
@interface ARLine : NSObject <NSCopying> {
    void _endPoint;
    unsigned long long  _identifier;
    void _startPoint;
}

@property (nonatomic) void endPoint;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic) void startPoint;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)endPoint;
- (unsigned long long)identifier;
- (void)setEndPoint;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setStartPoint;
- (void)startPoint;

@end
