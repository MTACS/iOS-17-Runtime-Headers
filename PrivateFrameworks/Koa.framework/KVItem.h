
@interface KVItem : NSObject <KVJSONDecodable, KVJSONEncodable> {
    NSData * _buffer;
    const struct Item { unsigned char x1[1]; } * _item;
}

@property (nonatomic, readonly) NSData *buffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isBoosted;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/Koa.framework/Koa

+ (id)itemFromBuffer:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)JSONWithIndent:(unsigned char)arg1;
- (id)buffer;
- (id)content;
- (id)description;
- (void)enumerateFieldsUsingBlock:(id /* block */)arg1;
- (void)enumerateFieldsWithLocaleType:(long long)arg1 usingBlock:(id /* block */)arg2;
- (unsigned long long)fieldCount;
- (id)fieldsWithType:(long long)arg1;
- (id)firstFieldWithType:(long long)arg1;
- (bool)hasFieldWithType:(long long)arg1 label:(id)arg2 value:(id)arg3;
- (unsigned long long)hash;
- (id)init;
- (id)initFromDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithBuffer:(id)arg1 verify:(bool)arg2 copy:(bool)arg3 error:(id*)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItem:(id)arg1;
- (id)itemId;
- (long long)itemType;
- (id)metaContent;

// Image: /System/Library/PrivateFrameworks/CoreEmbeddedSpeechRecognition.framework/CoreEmbeddedSpeechRecognition

- (bool)isBoosted;
- (void)setIsBoosted:(bool)arg1;

@end
