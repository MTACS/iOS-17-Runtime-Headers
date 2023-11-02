
@interface _DPHuffmanTable_Test : NSObject <_DPHuffmanTable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)getTable;
+ (id)getUUID;
+ (id)getUnknownTokenCode;

@end
