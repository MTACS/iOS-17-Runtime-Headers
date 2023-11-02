
@interface WOPersistence : NSObject <HDSyncCodable, NSCopying, NSSecureCoding> {
    NSDictionary * _keyedDatas;
    NSDictionary * _keyedDates;
    NSDictionary * _keyedNumbers;
    NSDictionary * _keyedStrings;
    NSDate * _objectModificationDate;
    unsigned long long  _objectState;
    NSData * _persistedData;
    NSData * _persistedProtoData;
    WOSyncIdentity * _syncIdentity;
    unsigned long long  _type;
    NSUUID * _uuid;
    long long  _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *keyedDatas;
@property (nonatomic, copy) NSDictionary *keyedDates;
@property (nonatomic, copy) NSDictionary *keyedNumbers;
@property (nonatomic, copy) NSDictionary *keyedStrings;
@property (nonatomic, copy) NSDate *objectModificationDate;
@property (nonatomic) unsigned long long objectState;
@property (nonatomic, copy) NSData *persistedData;
@property (nonatomic, copy) NSData *persistedProtoData;
@property (readonly) Class superclass;
@property (nonatomic, copy) WOSyncIdentity *syncIdentity;
@property (nonatomic) unsigned long long type;
@property (nonatomic, copy) NSUUID *uuid;
@property (nonatomic) long long version;

// Image: /System/Library/PrivateFrameworks/WorkoutHealthBridge.framework/WorkoutHealthBridge

+ (id)persistenceFromProto:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)zeroObjectModificationDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (long long)encodedByteCount;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithVersion:(long long)arg1 type:(unsigned long long)arg2 uuid:(id)arg3 persistedData:(id)arg4 objectState:(unsigned long long)arg5 objectModificationDate:(id)arg6 syncIdentity:(id)arg7;
- (id)initWithVersion:(long long)arg1 type:(unsigned long long)arg2 uuid:(id)arg3 persistedData:(id)arg4 persistedProtoData:(id)arg5 objectState:(unsigned long long)arg6 objectModificationDate:(id)arg7 syncIdentity:(id)arg8;
- (id)keyedDatas;
- (id)keyedDates;
- (id)keyedNumbers;
- (id)keyedStrings;
- (id)objectModificationDate;
- (unsigned long long)objectState;
- (id)persistedData;
- (id)persistedProtoData;
- (id)protobuf;
- (void)setKeyedDatas:(id)arg1;
- (void)setKeyedDates:(id)arg1;
- (void)setKeyedNumbers:(id)arg1;
- (void)setKeyedStrings:(id)arg1;
- (void)setObjectModificationDate:(id)arg1;
- (void)setObjectState:(unsigned long long)arg1;
- (void)setPersistedData:(id)arg1;
- (void)setPersistedProtoData:(id)arg1;
- (void)setSyncIdentity:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUuid:(id)arg1;
- (void)setVersion:(long long)arg1;
- (id)syncIdentity;
- (unsigned long long)type;
- (id)uuid;
- (long long)version;

// Image: /System/Library/PrivateFrameworks/WorkoutCore.framework/WorkoutCore

- (id)initWithJsonObject:(id)arg1;
- (id)jsonObject;

@end
