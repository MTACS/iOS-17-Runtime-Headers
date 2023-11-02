
@interface EKImageKey : NSObject <NSCopying> {
    NSString * _identifier;
    EKObjectID * _sourceID;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) EKObjectID *sourceID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithSourceID:(id)arg1 identifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)sourceID;

@end
