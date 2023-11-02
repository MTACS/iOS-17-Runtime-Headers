
@interface TRIPBUnknownField : NSObject <NSCopying> {
    TRIPBUInt32Array * mutableFixed32List_;
    TRIPBUInt64Array * mutableFixed64List_;
    NSMutableArray * mutableGroupList_;
    NSMutableArray * mutableLengthDelimitedList_;
    TRIPBUInt64Array * mutableVarintList_;
    int  number_;
}

@property (nonatomic, readonly) TRIPBUInt32Array *fixed32List;
@property (nonatomic, readonly) TRIPBUInt64Array *fixed64List;
@property (nonatomic, readonly) NSArray *groupList;
@property (nonatomic, readonly) NSArray *lengthDelimitedList;
@property (nonatomic, readonly) int number;
@property (nonatomic, readonly) TRIPBUInt64Array *varintList;

- (void)addFixed32:(unsigned int)arg1;
- (void)addFixed64:(unsigned long long)arg1;
- (void)addGroup:(id)arg1;
- (void)addLengthDelimited:(id)arg1;
- (void)addVarint:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)fixed32List;
- (id)fixed64List;
- (id)groupList;
- (unsigned long long)hash;
- (id)initWithNumber:(int)arg1;
- (bool)isEqual:(id)arg1;
- (id)lengthDelimitedList;
- (void)mergeFromField:(id)arg1;
- (int)number;
- (unsigned long long)serializedSize;
- (unsigned long long)serializedSizeAsMessageSetExtension;
- (id)varintList;
- (void)writeAsMessageSetExtensionToOutput:(id)arg1;
- (void)writeToOutput:(id)arg1;

@end
