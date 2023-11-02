
@interface EFPathComponent : NSObject <NSCopying> {
    NSString * _sanitizedString;
}

@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, readonly, copy) EFPathComponent *pathComponentByDeletingPathExtension;
@property (nonatomic, readonly, copy) NSString *pathExtension;
@property (nonatomic, readonly, copy) NSString *sanitizedString;

+ (id)pathComponentWithString:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;
- (id)pathComponentByDeletingPathExtension;
- (id)pathExtension;
- (id)sanitizedString;
- (id)subpathToIndex:(unsigned long long)arg1;

@end
