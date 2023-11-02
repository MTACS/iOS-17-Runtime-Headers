
@interface NTKWidgetComplicationMigrationKey : NSObject <NSCopying> {
    unsigned long long  _complicationType;
    NSNumber * _family;
}

@property (nonatomic) unsigned long long complicationType;
@property (nonatomic) NSNumber *family;

- (unsigned long long)complicationType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)family;
- (unsigned long long)hash;
- (id)initWithComplicationType:(unsigned long long)arg1 family:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setComplicationType:(unsigned long long)arg1;
- (void)setFamily:(id)arg1;

@end
