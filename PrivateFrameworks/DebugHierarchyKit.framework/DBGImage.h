
@interface DBGImage : NSObject <DBGValue, DBGValueJSONSerialization> {
    NSData * _imageData;
    struct __CFString { } * _imageType;
    NSDictionary * _metadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSData *imageData;
@property (readonly) struct __CFString { }*imageType;
@property (readonly) NSDictionary *metadata;
@property (readonly) Class superclass;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withImageData:(id)arg1 type:(struct __CFString { }*)arg2 metadata:(id)arg3;

- (void).cxx_destruct;
- (id)JSONCompatibleRepresentation;
- (id)debugDescription;
- (id)description;
- (id)imageData;
- (struct __CFString { }*)imageType;
- (id)initWithImageData:(id)arg1 type:(struct __CFString { }*)arg2 metadata:(id)arg3;
- (id)metadata;
- (id)objectValue;

@end
