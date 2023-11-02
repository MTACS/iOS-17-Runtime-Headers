
@interface PXTapToRadarConcreteDiagnosticContainer : NSObject <PXTapToRadarDiagnosticContainer> {
    NSMutableArray * _attachments;
    NSMutableArray * _collectionOperations;
    NSMutableDictionary * _dictionary;
    NSString * _name;
    NSMutableArray * _subproviders;
}

@property (nonatomic, readonly) NSArray *attachments;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *subproviders;

- (void).cxx_destruct;
- (void)addAttachment:(id)arg1;
- (void)addAttachmentWithData:(id)arg1 name:(id)arg2;
- (void)addAttachmentWithDictionary:(id)arg1 name:(id)arg2;
- (void)addAttachmentWithObjectiveCCode:(id)arg1 name:(id)arg2;
- (void)addAttachmentWithSwiftCode:(id)arg1 name:(id)arg2;
- (void)addAttachmentWithText:(id)arg1 name:(id)arg2;
- (void)addAttachmentWithText:(id)arg1 name:(id)arg2 extension:(id)arg3;
- (void)addSubprovider:(id)arg1;
- (void)addSubproviders:(id)arg1;
- (id)attachments;
- (id)beginCollectionOperationWithName:(id)arg1 timeout:(double)arg2;
- (id)dictionary;
- (void)finalizeWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)name;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)subproviders;

@end
