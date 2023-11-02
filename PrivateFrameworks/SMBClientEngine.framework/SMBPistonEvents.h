
@interface SMBPistonEvents : NSObject {
    struct smb_lease_break { 
        unsigned short newEpoch; 
        unsigned int flags; 
        unsigned long long leaseKeyHigh; 
        unsigned long long leaseKeyLow; 
        unsigned int currLeaseState; 
        unsigned int newLeaseState; 
    }  _leaseBreak;
}

@property struct smb_lease_break { unsigned short x1; unsigned int x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; } leaseBreak;

- (struct smb_lease_break { unsigned short x1; unsigned int x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; })leaseBreak;
- (void)setLeaseBreak:(struct smb_lease_break { unsigned short x1; unsigned int x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; })arg1;

@end
