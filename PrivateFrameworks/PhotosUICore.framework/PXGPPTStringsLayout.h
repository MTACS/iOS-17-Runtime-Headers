
@interface PXGPPTStringsLayout : PXGGridLayout <PXGStringSource> {
    NSDictionary * _attributes;
    NSArray * _strings;
}

@property (nonatomic, copy) NSDictionary *attributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *strings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attributedStringForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)attributes;
- (id)init;
- (id)initWithStringCount:(unsigned long long)arg1 localeCodes:(id)arg2;
- (void)setAttributes:(id)arg1;
- (void)setStrings:(id)arg1;
- (id)stringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)stringAttributesAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)strings;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;

@end
