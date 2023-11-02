
@interface WKMockNFTag : NSObject <NFTag> {
    NSData * _AppData;
    NSData * _UID;
    unsigned int  _ndefAvailability;
    unsigned long long  _ndefContainerSize;
    unsigned long long  _ndefMessageSize;
    <NFTagA> * _tagA;
    <NFTagB> * _tagB;
    <NFTagF> * _tagF;
    struct RetainPtr<NSData> { 
        void *m_ptr; 
    }  _tagID;
    unsigned int  _technology;
    unsigned int  _type;
}

@property (nonatomic, readonly, copy) NSData *AppData;
@property (nonatomic, readonly, copy) NSData *UID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int ndefAvailability;
@property (nonatomic, readonly) unsigned long long ndefContainerSize;
@property (nonatomic, readonly) unsigned long long ndefMessageSize;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <NFTagA> *tagA;
@property (nonatomic, readonly) <NFTagB> *tagB;
@property (nonatomic, readonly) <NFTagF> *tagF;
@property (nonatomic, readonly, copy) NSData *tagID;
@property (nonatomic, readonly) unsigned int technology;
@property (nonatomic, readonly) unsigned int type;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)AppData;
- (id)UID;
- (void)dealloc;
- (id)description;
- (id)initWithNFTag:(id)arg1;
- (id)initWithType:(unsigned int)arg1;
- (id)initWithType:(unsigned int)arg1 tagID:(id)arg2;
- (bool)isEqualToNFTag:(id)arg1;
- (unsigned int)ndefAvailability;
- (unsigned long long)ndefContainerSize;
- (unsigned long long)ndefMessageSize;
- (id)tagA;
- (id)tagB;
- (id)tagF;
- (id)tagID;
- (unsigned int)technology;
- (unsigned int)type;

@end
