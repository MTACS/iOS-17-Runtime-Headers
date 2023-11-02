
@interface PNPromoterFaceGroup : NSObject <PNFaceGroupProtocol> {
    NSArray * _faceIdentifiers;
    NSNumber * _groupIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long faceCountInFaceGroup;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDirty;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)faceCountInFaceGroup;
- (id)initWithGroupIdentifier:(id)arg1 andFaceIdentifiers:(id)arg2;
- (bool)isDirty;
- (id)localIdentifier;

@end
