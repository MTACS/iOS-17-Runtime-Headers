
@interface MTRDistinguishedNameInfo : NSObject <NSCopying> {
    struct ChipDN { 
        struct ChipRDN { 
            struct Span<const char> { 
                char *mDataBuf; 
                unsigned long long mDataLen; 
            } mString; 
            unsigned long long mChipVal; 
            unsigned short mAttrOID; 
            bool mAttrIsPrintableString; 
        } rdn[5]; 
    }  _dn;
}

@property (readonly) NSSet *caseAuthenticatedTags;
@property (readonly) NSNumber *fabricID;
@property (readonly) NSNumber *intermediateCACertificateID;
@property (readonly) NSNumber *nodeID;
@property (readonly) NSNumber *rootCACertificateID;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)caseAuthenticatedTags;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fabricID;
- (id)initWithDN:(const void*)arg1;
- (id)intermediateCACertificateID;
- (bool)isEqual:(id)arg1;
- (id)nodeID;
- (id)rootCACertificateID;

@end
