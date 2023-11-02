
@interface TRIPBUnknownFieldSet : NSObject <NSCopying> {
    struct __CFDictionary { } * fields_;
}

+ (bool)isFieldTag:(int)arg1;

- (void)addField:(id)arg1;
- (void)addUnknownMapEntry:(int)arg1 value:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countOfFields;
- (id)data;
- (void)dealloc;
- (id)description;
- (id)getField:(int)arg1;
- (void)getTags:(int*)arg1;
- (bool)hasField:(int)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)mergeFieldFrom:(int)arg1 input:(id)arg2;
- (void)mergeFromCodedInputStream:(id)arg1;
- (void)mergeFromData:(id)arg1;
- (void)mergeMessageSetMessage:(int)arg1 data:(id)arg2;
- (void)mergeUnknownFields:(id)arg1;
- (void)mergeVarintField:(int)arg1 value:(int)arg2;
- (id)mutableFieldForNumber:(int)arg1 create:(bool)arg2;
- (unsigned long long)serializedSize;
- (unsigned long long)serializedSizeAsMessageSet;
- (id)sortedFields;
- (void)writeAsMessageSetTo:(id)arg1;
- (void)writeToCodedOutputStream:(id)arg1;

@end
