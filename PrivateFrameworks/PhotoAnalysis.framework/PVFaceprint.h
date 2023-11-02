
@interface PVFaceprint : PVObject {
    NSData * _faceprintData;
    long long  _faceprintVersion;
}

@property (nonatomic, retain) NSData *faceprintData;
@property (nonatomic) long long faceprintVersion;

+ (id)faceprintWithFaceprintData:(id)arg1 faceprintVersion:(long long)arg2;

- (void).cxx_destruct;
- (void)_setPropertiesFrom:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)faceprintData;
- (long long)faceprintVersion;
- (bool)getDistance:(float*)arg1 toOtherFaceprint:(id)arg2 error:(id*)arg3;
- (void)setFaceprintData:(id)arg1;
- (void)setFaceprintVersion:(long long)arg1;

@end
