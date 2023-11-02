
@interface MessagesCloudSync.ChatRecordKeyedDataSource : NSObject <KeyedDataSource> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  chatRecord;
}

- (void).cxx_destruct;
- (id)arrayForKey:(id)arg1;
- (id)assetURLForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)dictForKey:(id)arg1;
- (id)init;
- (id)numberForKey:(id)arg1;
- (id)sourceRecordChangeTag;
- (id)sourceRecordName;
- (id)sourceRecordType;
- (id)stringForKey:(id)arg1;

@end
