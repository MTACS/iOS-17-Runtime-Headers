
@interface PTGlobalCinematographyMetadata : NSObject <PTSerializable> {
    unsigned int  _majorVersion;
    unsigned int  _minorVersion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int majorVersion;
@property (nonatomic, readonly) unsigned int minorVersion;
@property (readonly) Class superclass;

+ (id)objectFromData:(id)arg1;

- (id)initWithMajorVersion:(unsigned int)arg1 minorVersion:(unsigned int)arg2;
- (unsigned int)majorVersion;
- (unsigned int)minorVersion;
- (unsigned int)sizeOfSerializedObjectWithOptions:(id)arg1;
- (bool)writeToData:(id)arg1 withOptions:(id)arg2;

@end
