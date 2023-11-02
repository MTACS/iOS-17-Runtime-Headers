
@interface PXStoryExportOrientation : NSObject <NSCopying> {
    long long  _type;
}

@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) long long type;

+ (id)pickableOrientations;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithOrientationType:(long long)arg1;
- (id)initWithUserInterfaceOrientation:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedTitle;
- (long long)type;

@end
