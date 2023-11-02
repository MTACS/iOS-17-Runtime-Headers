
@interface CKContextUserFacingUniversalRecent : NSObject <NSCopying> {
    BMUserActivityMetadataEvent * _event;
}

@property (nonatomic, retain) BMUserActivityMetadataEvent *event;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)event;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setEvent:(id)arg1;

@end
