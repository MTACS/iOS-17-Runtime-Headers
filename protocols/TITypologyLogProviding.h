
@protocol TITypologyLogProviding

@required

- (void)enumerateParsedTraceRecordsWithBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TITraceLogRecord *, void*
- (void)enumerateParsedTraceRecordsWithBlockIncludingStop:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TITraceLogRecord *, bool*, void*
- (void)enumerateRecordsWithBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TITypologyRecord *, void*
- (void)enumerateTraceRecordsWithBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TITraceLogRecord *, void*
- (void)enumerateTraceRecordsWithBlockIncludingStop:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TITraceLogRecord *, bool*, void*
- (void)enumerateTypologyRecordsWithBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TITypologyRecord *, void*
- (void)enumerateTypologyRecordsWithBlockIncludingStop:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TITypologyRecord *, bool*, void*
- (TITraceLogRecord *)parsedTraceRecordMatchingUUID:(NSUUID *)arg1;
- (TITraceLogRecord *)traceRecordMatchingUUID:(NSUUID *)arg1;
- (TITypologyRecord *)typologyRecordMatchingUUID:(NSUUID *)arg1;

@end
