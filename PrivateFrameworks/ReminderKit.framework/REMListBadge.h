
@interface REMListBadge : NSObject {
    NSString * emblem;
    NSString * emoji;
}

@property (nonatomic, copy) NSString *emblem;
@property (nonatomic, copy) NSString *emoji;
@property (nonatomic, readonly, copy) NSString *rawValue;

- (void).cxx_destruct;
- (id)_emojiFromRawString:(id)arg1;
- (bool)_isJSONString:(id)arg1;
- (bool)_isSingleCharacterEmoji:(id)arg1;
- (id)emblem;
- (id)emoji;
- (id)initWithEmblem:(id)arg1;
- (id)initWithEmoji:(id)arg1;
- (id)initWithRawValue:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)rawValue;
- (void)setEmblem:(id)arg1;
- (void)setEmoji:(id)arg1;

@end
