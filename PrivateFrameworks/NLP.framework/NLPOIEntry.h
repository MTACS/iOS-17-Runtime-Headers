
@interface NLPOIEntry : NSObject <NLParsecNamedEntity> {
    NLPOIEntryImpl * m_impl;
}

@property (nonatomic, readonly) unsigned char category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) float score;
@property (readonly) Class superclass;

- (unsigned char)category;
- (void)dealloc;
- (id)initWithProtoBuf:(id)arg1;
- (id)name;
- (float)score;

@end
