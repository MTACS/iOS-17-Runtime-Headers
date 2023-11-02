
@interface VUIPlistMediaEntityIdentifier : NSObject <VUIMediaEntityIdentifierInternal> {
    NSString * _identifier;
    VUIMediaEntityType * _mediaEntityType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) VUIMediaEntityType *mediaEntityType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)mediaEntityType;
- (void)setIdentifier:(id)arg1;
- (void)setMediaEntityType:(id)arg1;

@end
