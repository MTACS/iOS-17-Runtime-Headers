
@interface HDAttachmentEntity : HDHealthEntity

+ (id)_insertAttachment:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)_insertIfDoesNotExistAttachment:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)attachmentWithIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)attachmentWithIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)enumerateAttachmentsWithPredicate:(id)arg1 transaction:(id)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
+ (long long)protectionClass;

@end
