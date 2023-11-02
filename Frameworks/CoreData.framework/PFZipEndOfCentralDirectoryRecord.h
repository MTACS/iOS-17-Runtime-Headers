
@interface PFZipEndOfCentralDirectoryRecord : NSObject {
    unsigned int  _byteSizeOfCentralDirectory;
    unsigned int  _centralDirectoryOffset;
    NSString * _comment;
    unsigned short  _commentLength;
    unsigned short  _diskWhereCentralDirectoryStarts;
    unsigned short  _numberOfCentralDirectoryRecordsOnThisDisk;
    unsigned short  _numberOfDisk;
    unsigned short  _totalNumberOfCentralDirectoryRecords;
}

- (void)dealloc;
- (id)description;
- (id)init;

@end
