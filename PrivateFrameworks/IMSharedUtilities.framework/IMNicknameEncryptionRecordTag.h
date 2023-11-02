
@interface IMNicknameEncryptionRecordTag : IMNicknameEncryptionTag

+ (id)tagWithDataRepresentation:(id)arg1 error:(id*)arg2;
+ (id)tagWithStringRepresentation:(id)arg1 error:(id*)arg2;

- (bool)isEqualToTag:(id)arg1 error:(id*)arg2;

@end
