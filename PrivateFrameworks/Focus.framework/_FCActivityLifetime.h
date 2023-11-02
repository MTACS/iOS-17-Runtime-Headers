
@interface _FCActivityLifetime : NSObject <FCActivityLifetimeDescribing> {
    DNDLifetimeDetails * _dndLifetimeDetails;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_dndLifetimeDetails, nonatomic, readonly, copy) DNDLifetimeDetails *dndLifetimeDetails;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *lifetimeIdentifier;
@property (nonatomic, readonly, copy) NSString *lifetimeMetadata;
@property (nonatomic, readonly, copy) NSString *lifetimeName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dndLifetimeDetails;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithLifetimeDetails:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lifetimeIdentifier;
- (id)lifetimeMetadata;
- (id)lifetimeName;

@end
