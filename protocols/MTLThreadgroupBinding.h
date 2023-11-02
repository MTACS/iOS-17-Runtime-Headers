
@protocol MTLThreadgroupBinding <MTLBinding>

@required

- (unsigned long long)threadgroupMemoryAlignment;
- (unsigned long long)threadgroupMemoryDataSize;

@end
