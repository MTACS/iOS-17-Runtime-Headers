
@interface PVObject : NSObject <NSCopying> {
    NSString * _localIdentifier;
}

@property (nonatomic, readonly, copy) NSString *localIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithLocalIdentifier:(id)arg1;
- (id)localIdentifier;

@end
