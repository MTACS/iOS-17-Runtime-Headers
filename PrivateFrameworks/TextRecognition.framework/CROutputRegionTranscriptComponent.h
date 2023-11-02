
@interface CROutputRegionTranscriptComponent : NSObject <CRCodable, NSCopying> {
    CROutputRegion * _outputRegion;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _representedRange;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) CROutputRegion *outputRegion;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } representedRange;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crCodableDataRepresentation;
- (id)initWithOutputRegion:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)isEqual:(id)arg1;
- (id)outputRegion;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })representedRange;

@end
