
@interface PXSharedLibraryUIParticipant : NSObject <NSCopying, PXFaceTileImageCombinerItem> {
    unsigned long long  _addressKind;
    NSString * _appleIDAddress;
    CNContact * _contact;
}

@property (nonatomic, readonly) unsigned long long addressKind;
@property (nonatomic, retain) NSString *appleIDAddress;
@property (nonatomic, readonly) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSPersonNameComponents *nameComponents;
@property (readonly) Class superclass;

+ (int)_fetchImageForContact:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 displayScale:(double)arg3 isRTL:(bool)arg4 resultHandler:(id /* block */)arg5;
+ (int)_fetchImageForEmailAddress:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 displayScale:(double)arg3 isRTL:(bool)arg4 resultHandler:(id /* block */)arg5;

- (void).cxx_destruct;
- (unsigned long long)addressKind;
- (id)appleIDAddress;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)fetchImageForTargetSize:(struct CGSize { double x1; double x2; })arg1 displayScale:(double)arg2 isRTL:(bool)arg3 resultHandler:(id /* block */)arg4;
- (unsigned long long)hash;
- (id)initWithEmailAddress:(id)arg1 contact:(id)arg2;
- (id)initWithPhoneNumber:(id)arg1 contact:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)nameComponents;
- (void)px_requestImageWithTargetSize:(struct CGSize { double x1; double x2; })arg1 displayScale:(double)arg2 isRTL:(bool)arg3 resultHandler:(id /* block */)arg4;
- (void)setAppleIDAddress:(id)arg1;

@end
