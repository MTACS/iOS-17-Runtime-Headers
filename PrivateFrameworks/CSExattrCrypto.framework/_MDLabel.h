
@interface _MDLabel : NSObject {
    union { 
        struct { 
            unsigned int isMutuallyExclusiveSetMember : 1; 
            unsigned int isPublicVisibility : 1; 
            unsigned int hasPreviewIcon : 1; 
            unsigned int hasFinderColor : 1; 
            unsigned int setFinderColor : 3; 
            unsigned int hasExtendedFinderColor : 1; 
            unsigned int reservedBits1 : 8; 
            unsigned int reservedBits2 : 16; 
            unsigned int reservedBits3 : 32; 
        } ; 
        long long payload; 
    }  _attrBits;
    struct __CFDictionary { } * _attrs;
    struct __CFUUID { } * _userUUID;
    struct __CFUUID { } * _uuid;
}

- (unsigned long long)_cfTypeID;
- (void*)_copyXattrUpdatesKey;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; })_getUUIDBytesForUserUUID:(struct __CFUUID { }*)arg1;
- (void)cleanAttrs;
- (void)dealloc;
- (id)description;
- (void*)getAttr:(struct __CFString { }*)arg1;
- (id)getAttrFallback:(const struct __CFString {}**)arg1;
- (unsigned long long)hash;
- (id)initWithUUID:(struct __CFUUID { }*)arg1 attributes:(struct __CFDictionary { }*)arg2 forUserUUID:(struct __CFUUID { }*)arg3;
- (bool)isEqual:(id)arg1;
- (void)updateAttrs:(struct __CFDictionary { }*)arg1;

@end
